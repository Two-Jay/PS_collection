-- Title : 이름에 el이 들어가는 동물 찾기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59047
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
SELECT animals.ANIMAL_ID,
    animals.NAME
FROM ANIMAL_INS AS animals
WHERE animals.ANIMAL_TYPE = 'Dog' AND LOWER(animals.NAME) LIKE '%el%'
ORDER BY animals.NAME ASC

/*
LIKE 연산자는 특정 문자열이 포함되어 있는지 확인하는 연산자이다.
기본적으로 LIKE는 대소문자를 구분하여 찾는다.
따라서 레코드를 찾을 때 대소문자를 구분하지 않고 찾으려면 LOWER()등을 이용해 문자열을 일관적으로 소문자 등으로 바꾸어 비교한다.
*/