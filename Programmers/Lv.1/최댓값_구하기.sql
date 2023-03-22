-- Title : 최댓값 구하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59415
-- =========================================================================
/*
테이블 구조

Table ANIMAL_INS {
  ANIMAL_ID  VARCHAR(N)    [not null]
  ANIMAL_TYPE  VARCHAR(N)    [not null]
  DATETIME  DATETIME    [not null]
  INTAKE_CONDITION  VARCHAR(N)    [not null]
  NAME  VARCHAR(N)  [null]
  SEX_UPON_INTAKE  VARCHAR(N)    [not null]
}
*/

SELECT DATETIME
FROM ANIMAL_INS AS animals
ORDER BY DATETIME DESC
LIMIT 1