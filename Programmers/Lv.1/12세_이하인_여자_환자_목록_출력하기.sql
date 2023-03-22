-- Title : 12세 이하인 여자 환자 목록 출력하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/132201
-- =========================================================================
/*
테이블 구조

Table PATIENT {
  PT_NO varchar(10)
  PT_NAME varchar(20)
  GEND_CD varchar(1)
  AGE integer
  TLNO  varchar(50)
}
*/

SELECT p.PT_NAME,
    p.PT_NO,
    p.GEND_CD,
    p.AGE,
    IFNULL(p.TLNO, 'NONE')
FROM PATIENT AS p
WHERE p.GEND_CD = "w" AND p.AGE <= 12
ORDER BY p.AGE DESC, p.PT_NAME ASC;