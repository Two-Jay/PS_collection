-- Title : 3월에 태어난 여성 회원 목록 출력하기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131120
-- =========================================================================
/*
테이블 구조

Table MEMBER_PROFILE {
  MEMBER_ID VARCHAR(100)
  MEMBER_NAME VARCHAR(50)
  TLNO  VARCHAR(50) [null]
  GENDER  VARCHAR(1)  [null]
  DATE_OF_BIRTH DATE  [null]
}
*/

SELECT MEMBER_ID,
    MEMBER_NAME,
    GENDER,
    DATE_FORMAT(DATE_OF_BIRTH, '%Y-%m-%d') AS DATE_OF_BIRTH
FROM MEMBER_PROFILE AS members
WHERE MONTH(members.DATE_OF_BIRTH) = 3 AND members.GENDER = 'W' AND members.TLNO
ORDER BY members.MEMBER_ID ASC;

/*
IS NOT NULL
*/
SELECT MEMBER_ID,
    MEMBER_NAME,
    GENDER,
    DATE_FORMAT(DATE_OF_BIRTH, '%Y-%m-%d') AS DATE_OF_BIRTH
FROM MEMBER_PROFILE AS members
WHERE MONTH(members.DATE_OF_BIRTH) = 3 AND members.GENDER = 'W' AND members.TLNO IS NOT NULL
ORDER BY members.MEMBER_ID ASC;