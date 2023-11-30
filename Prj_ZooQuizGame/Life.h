#pragma once

#include <iostream>
#include <string>

//열거형 상수 클래스
enum class LifeType
{
	LT_NULL = 0, LT_ANIMAL, LT_PLANT
};

class Life
{
public:

	//생성자
	Life(void) {}

	Life(const std::string& name, LifeType nType, const std::string& sciName, const std::string& family, const std::string& home)
	{
		setParam(name, nType, sciName, family, home);
	}

	//소멸자
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

	//프로퍼티를 접근하지 않는 메소드는 정적 메소드로 선언, 메소드 선언 앞에 static 추가
	static std::string toStr(LifeType nType);

private:

	std::string m_name;						//이름
	LifeType m_nType = LifeType::LT_NULL;	//유형
	std::string m_sciName;					//학명
	std::string m_family;					//분류
	std::string m_home;						//서식지
};

inline std::ostream& operator <<(std::ostream stream, const Life& life)
{
	//정적 메소드는 접근할 때 클래스명 :: 멤버명을 사용
	stream << life.getName() << "는" << Life::toStr(life.getType()) << "입니다.";
	stream << "학명은" << life.getSciName() << "이고, 계통은 " << life.getFamily() << "입니다. ";

	return stream;
}

inline std::string Life::toStr(LifeType nType)
{
	switch (nType)
	{
	case LifeType::LT_ANIMAL:
		return "동물";

	case LifeType::LT_PLANT:
		return "식물";

	default:
		break;
	}
}