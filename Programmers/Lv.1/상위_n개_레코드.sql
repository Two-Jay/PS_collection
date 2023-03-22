-- Title : 상위 n개 레코드
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59405
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

SELECT animals.NAME
FROM ANIMAL_INS AS animals
ORDER BY animals.DATETIME ASC
LIMIT 1