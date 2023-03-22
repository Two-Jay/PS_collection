-- Title : 오랜 기간 보호한 동물(2)
-- Level : 3
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59411
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

Table ANIMAL_OUTS {
  ANIMAL_ID VARCHAR(N)  [NOT NULL]
  ANIMAL_TYPE VARCHAR(N)  [NOT NULL]
  DATETIME  DATETIME  [NOT NULL]
  NAME  VARCHAR(N)  [NULL]
  SEX_UPON_OUTCOME  VARCHAR(N)  [NOT NULL]
}
*/

SELECT ins.ANIMAL_ID,
    ins.NAME
FROM ANIMAL_INS AS ins
INNER JOIN ANIMAL_OUTS AS outs ON ins.ANIMAL_ID = outs.ANIMAL_ID
ORDER BY DATEDIFF(outs.DATETIME, ins.DATETIME) + 1 DESC
LIMIT 2

/*
ORDER BY 절에는 특정 컬럼의 값 뿐만이 아닌 연산 결과를 기준으로 정렬할 수 있다.
*/