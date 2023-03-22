-- Title : 조건에 맞는 회원수 구하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131535
-- =========================================================================
/*
테이블 구조

Table USER_INFO {
  USER_ID integer
  GENDER tinyint(1) [null]
  AGE integer [null]
  JOINED DATE
}
*/

SELECT COUNT(*) AS USERS
FROM USER_INFO AS users
WHERE YEAR(users.JOINED) = 2021 AND 20 <= users.AGE AND users.AGE <= 29

/*
BETWEEN 연산자를 활용한 풀이
*/
SELECT COUNT(*) AS USERS
FROM USER_INFO AS users
WHERE YEAR(users.JOINED) = 2021 AND users.AGE BETWEEN 20 AND 29
