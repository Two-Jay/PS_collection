-- Title : 흉부외과 또는 일반외과 의사 목록 출력하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/132203
-- =========================================================================
/*
테이블 구조

Table DOCTOR {
  DR_NAME varchar(20)
  DR_ID varchar(10)
  LCNS_NO varchar(30)
  HIRE_YMD  DATE
  MCDP_CD varchar(6) [null]
  TLNO  varchar(50) [null]
}
*/

SELECT d.DR_NAME,
    d.DR_ID,
    d.MCDP_CD,
    DATE_FORMAT(d.HIRE_YMD, '%Y-%m-%d')
FROM DOCTOR AS d
WHERE d.MCDP_CD = 'CS' or d.MCDP_CD = 'GS'
ORDER BY d.HIRE_YMD DESC, d.DR_NAME ASC;