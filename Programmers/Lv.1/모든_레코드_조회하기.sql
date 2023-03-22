-- Title : 모든 레코드 조회하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/59034
-- =========================================================================
/*
테이블 구조

Table ANIMAL_INS {
  ANIMAL_ID         varchar(n) [not null]
  ANIMAL_TYPE       varchar(n) [not null]
  DATETIME          datetime(n) [not null]
  INTAKE_CONDITION  varchar(n) [not null]
  NAME              varchar(n) [null]
  SEX_UPON_INTAKE   varchar(n) [not null]
}
*/

SELECT * FROM ANIMAL_INS AS animals
ORDER BY animals.ANIMAL_ID ASC

