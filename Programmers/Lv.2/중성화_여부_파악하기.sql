-- Title : 중성화 여부 파악하기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59409
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

SELECT ANIMAL_ID,
    NAME,
    CASE
        WHEN SEX_UPON_INTAKE LIKE '%Neutered%' OR SEX_UPON_INTAKE LIKE '%Spayed%' THEN 'O'
        ELSE 'X'
    END AS 중성화
FROM ANIMAL_INS
ORDER BY ANIMAL_ID ASC;

/*
CASE 문은 조건에 따라 다른 값을 반환하는 연산자이다.
CASE WHEN 조건1 THEN 값1
     WHEN 조건2 THEN 값2
     ...
     ELSE 값N
END

이 문제는 IF(조건, 값1, 값2) 함수를 사용해도 된다.
IF 함수는 조건이 참이면 값1을 반환하고, 거짓이면 값2를 반환한다.
IF 함수에 REGEXP를 사용해도 된다.
REGEXP는 정규표현식을 사용할 수 있는 연산자이다.
IF(조건 REGEXP '정규표현식', 값1, 값2)
*/

SELECT ANIMAL_ID,
    NAME, 
    IF(SEX_UPON_INTAKE REGEXP 'Neutered|Spayed', 'O', 'X') AS 중성화
FROM ANIMAL_INS AS animals
ORDER BY animals.ANIMAL_ID ASC;



