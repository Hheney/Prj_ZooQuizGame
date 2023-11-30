#pragma once

#include <iostream>
#include <string>

//������ ��� Ŭ����
enum class LifeType
{
	LT_NULL = 0, LT_ANIMAL, LT_PLANT
};

class Life
{
public:

	//������
	Life(void) {}

	Life(const std::string& name, LifeType nType, const std::string& sciName, const std::string& family, const std::string& home)
	{
		setParam(name, nType, sciName, family, home);
	}

	//�Ҹ���
	~Life() {}

	//getter
	std::string getName(void) const { return m_name; }
	LifeType getType(void) const { return m_nType; }
	std::string getSciName(void) const { return m_sciName; }
	std::string getFamily(void) const { return m_family; }
	std::string getHome(void) const { return m_home; }

	//setter
	void setParam(const std::string& name, LifeType nType, const std::string& sciName, const std::string& family, const std::string& home)
	{
		m_name = name;
		m_nType = nType;
		m_sciName = sciName;
		m_family = family;
		m_home = home;
	}

	//������Ƽ�� �������� �ʴ� �޼ҵ�� ���� �޼ҵ�� ����, �޼ҵ� ���� �տ� static �߰�
	static std::string toStr(LifeType nType);

private:

	std::string m_name;						//�̸�
	LifeType m_nType = LifeType::LT_NULL;	//����
	std::string m_sciName;					//�и�
	std::string m_family;					//�з�
	std::string m_home;						//������
};

inline std::ostream& operator <<(std::ostream stream, const Life& life)
{
	//���� �޼ҵ�� ������ �� Ŭ������ :: ������� ���
	stream << life.getName() << "��" << Life::toStr(life.getType()) << "�Դϴ�.";
	stream << "�и���" << life.getSciName() << "�̰�, ������ " << life.getFamily() << "�Դϴ�. ";

	return stream;
}

inline std::string Life::toStr(LifeType nType)
{
	switch (nType)
	{
	case LifeType::LT_ANIMAL:
		return "����";

	case LifeType::LT_PLANT:
		return "�Ĺ�";

	default:
		break;
	}
}