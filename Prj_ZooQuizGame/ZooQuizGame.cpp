/*
동물과 식물 문제를 무작위로 내어 문제를 맞추는 게임을 개발하세요.

[개발 목표]
 - 생물 클래스: Life, 동물 클래스: Animal(Life 상속), 식물 클래스: Plant(Life 상속)
 - Life 프로퍼티: 이름(name), 유형(type: 동물 혹은 식물), 학명(sciName), 분류(family), 서식지(home)
 - 동물 프로퍼티: 먹이(food), 애완(pet), 울음소리(voice)
 - 식물 프로퍼티: 재배(farm), 꽃(flower), 꽃말(flowerLang)
 - Animal을 상속받아 동물별로 클래스 생성: 5종 만들기
 - Plant를 상속받아 식물별로 클래스 생성: 5종 만들기
 - 동식물 정보는 네이버 동물백과, 식물백과에서 찾기
 - 문제와 답은 파일을 읽어서 생성(동물 문제 5개, 식물 문제 5개; 보기는 3개씩 생성)

1. 메뉴 선택
 (1) 동물 공부: 동물 5종의 정보 출력
 (2) 식물 공부: 식물 5종의 정보 출력
 (3) Zoo Quiz: 문제 10개를 무작위로 출력, 보기 3개도 무작위로 출력
 (4) 게임 통계: 문제별 정답률, 득점, 플레이 시간 출력
 (5) 종료

[기타]
 - 프로그램 시작과 종료 메시지를 출력해야 함
 - 프로그램 시작시 사용자 이름 입력 받음
 - 제대로 된 입력과 출력 사용: 사용자가 보기 좋아야 함; 콘솔 출력에 색깔도 사용
 - 변수명과 상수명을 최대한 명시적으로 선택
 - 클래스의 메소드를 최대한 많이 사용해야 함
*/
#include "Life.h"
#include "Animal.h"
#include "Plant.h"

int main()
{
	using namespace std;

	Life panda("판다", LifeType::LT_ANIMAL, "Ailuropoda melanoleuca", "괌과", "중국 사천성");
	//cout << panda << endl;

	return 0;
}