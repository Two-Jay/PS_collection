-- Title: 나이 정보가 없는 회원 수 구하기
-- Level: 1
-- Category: 프로그래머스
-- URL: https://school.programmers.co.kr/learn/courses/30/lessons/131528
-- =========================================================================
/*
테이블 구조

Table USER_INFO {
  USER_ID INTEGER
  GENDER  TINYINT(1)
  AGE     INTEGER
  JOINED  DATE
}
*/

SELECT COUNT(*) AS USERS
FROM USER_INFO
WHERE USER_INFO.AGE IS NULL

/*
COUNT(*)를 사용하여, USER_INFO 테이블의 모든 행의 개수를 가져온다.
WHERE 절에서 AGE가 NULL인 데이터만 가져온다.
*/