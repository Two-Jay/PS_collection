-- Title : 강원도에 위치한 생산공장 목록 출력하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131112
-- =========================================================================
/*
테이블 구조

Table FOOD_FACTORY {
  FACTORY_ID  varchar(10)
  FACTORY_NAME  varchar(50)
  ADDRESS varchar(100)
  TLNO  varchar(20) [null]
}
*/

SELECT factories.FACTORY_ID,
    factories.FACTORY_NAME,
    factories.ADDRESS
FROM FOOD_FACTORY AS factories
WHERE factories.ADDRESS LIKE '%강원도%'
ORDER BY factories.FACTORY_ID ASC;

/*
SUBSTR() 활용

LIKE 가 아니라 SUBSTR()를 활용해서 풀어보면 다음과 같다.
LIKE는 패턴 매칭을 기반으로한 문자열 검색이고
SUBSTR()은 문자열의 일부를 추출하는 함수이다.

SELECT factories.FACTORY_ID,
    factories.FACTORY_NAME,
    factories.ADDRESS
FROM FOOD_FACTORY AS factories
WHERE SUBSTR(factories.ADDRESS, 1, 3) = '강원도'
ORDER BY factories.FACTORY_ID ASC;
*/