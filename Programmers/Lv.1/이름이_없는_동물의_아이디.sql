-- Title: 이름이 없는 동물의 아이디
-- Level: 1
-- Category: 프로그래머스
-- URL: https://school.programmers.co.kr/learn/courses/30/lessons/59039
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

SELECT ANIMAL_ID
FROM ANIMAL_INS AS animals
WHERE animals.NAME IS NULL
ORDER BY animals.ANIMAL_ID ASC

/*
WHERE 절에서 IS NULL을 사용하여, 이름이 NULL인 데이터만 가져온다.
ORDER BY를 사용하여, ANIMAL_ID를 기준으로 오름차순으로 정렬한다.
*/