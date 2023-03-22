-- Title : 루시와 엘라 찾기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59046
-- =========================================================================
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

SELECT animals.ANIMAL_ID,
    animals.NAME,
    animals.SEX_UPON_INTAKE
FROM ANIMAL_INS AS animals
WHERE animals.NAME IN ("Lucy", "Ella", "Pickle", "Rogan", "Sabrina", "Mitty")

/*
IN 연산자는 여러 개의 값 중 하나라도 일치하는지 확인하는 연산자이다.
IN (값1, 값2, 값3, ...)
*/