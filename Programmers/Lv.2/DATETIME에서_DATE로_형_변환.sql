-- Title : DATETIME에서 DATE로 형 변환
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59414
-- =================================================================
/*
테이블 구조

Table ANIMAL_INS {
  ANIMAL_ID VARCHAR(N)  [NOT NULL]
  ANIMAL_TYPE VARCHAR(N)  [NOT NULL]
  DATETIME  DATETIME  [NOT NULL]
  INTAKE_CONDITION  VARCHAR(N)  [NOT NULL]
  NAME  VARCHAR(N)  [NULL]
  SEX_UPON_INTAKE VARCHAR(N)  [NOT NULL]
}
*/

SELECT ANIMAL_ID,
    NAME,
    DATE_FORMAT(DATETIME, '%Y-%m-%d') AS 날짜
FROM ANIMAL_INS AS animals
ORDER BY animals.ANIMAL_ID ASC