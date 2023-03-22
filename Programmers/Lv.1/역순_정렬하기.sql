-- Title : 역순 정렬하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59035
-- =========================================================================
/*
테이블 구조

Table ANIMAL_INS {
  ANIMAL_ID VARCHAR(N)
  ANIMAL_TYPE VARCHAR(N)
  DATETIME  DATETIME
  INTAKE_CONDITION  VARCHAR(N)
  NAME  VARCHAR(N)  [null]
  SEX_UPON_INTAKE VARCHAR(N)
}
*/

SELECT animals.NAME,
    animals.DATETIME
FROM ANIMAL_INS as animals
ORDER BY animals.ANIMAL_ID DESC
