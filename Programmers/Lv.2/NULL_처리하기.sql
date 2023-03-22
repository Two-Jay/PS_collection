-- Title : NULL 처리하기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59410
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

SELECT ANIMAL_TYPE,
    IFNULL(NAME, 'No name') AS NAME,
    SEX_UPON_INTAKE
FROM ANIMAL_INS AS animals
ORDER BY animals.ANIMAL_ID ASC
