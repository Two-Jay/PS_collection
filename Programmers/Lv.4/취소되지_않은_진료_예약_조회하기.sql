-- Title : 취소되지 않은 진료 예약 조회하기
-- Level : 4
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/132204
-- =========================================================================
/*
테이블 구조

Table PATIENT {
  PT_NO VARCHAR(N)  [NOT NULL]
  PT_NAME  VARCHAR(N) [NOT NULL]
  GEND_CD  VARCHAR(N) [NOT NULL]
  AGE INTEGER  [NOT NULL]
  TLNO  VARCHAR(N)  [NULL]
}

Table DOCTOR {
  DR_NAME  VARCHAR(N)  [NOT NULL]
  DR_ID  VARCHAR(N)  [NOT NULL]
  LCNS_NO  VARCHAR(N)  [NOT NULL]
  HIRE_YMD  DATE  [NOT NULL]
  MCDP_CD  VARCHAR(N)  [NULL]
  TLNO  VARCHAR(N)  [NULL]
}

Table APPOINTMENT {
  APNT_YMD  TIMESTAMP  [NOT NULL]
  APNT_NO  INTEGER  [NOT NULL]
  PT_NO  VARCHAR(N)  [NOT NULL]
  MCDP_CD  VARCHAR(N)  [NOT NULL]
  MDDR_ID  VARCHAR(N)  [NOT NULL]
  APNT_CNCL_YN  VARCHAR(N)  [NULL]
  APNT_CNCL_YMD  DATE  [NULL]
}

ref : "APPOINTMENT"."PT_NO" < "PATIENT"."PT_NO"
ref : "APPOINTMENT"."MDDR_ID" < "DOCTOR"."DR_ID"
*/
SELECT APNT_NO,
    PT_NAME,
    T.PT_NO,
    T.MCDP_CD,
    T.DR_NAME,
    T.APNT_YMD
FROM (
    SELECT APNT_YMD,
        APNT_NO,
        PT_NO,
        DR_ID,
        apnt.MCDP_CD,
        DR_NAME
    FROM APPOINTMENT AS apnt
    JOIN DOCTOR AS dr ON apnt.MDDR_ID = dr.DR_ID
    WHERE apnt.MCDP_CD = 'CS' AND DATE_FORMAT(apnt.APNT_YMD, '%Y-%m-%d') = '2022-04-13' AND apnt.APNT_CNCL_YN = 'N'
) AS T
JOIN PATIENT AS pt ON T.PT_NO = pt.PT_NO
ORDER BY APNT_YMD ASC

/*
일반적인 서브쿼리를 이용하면 위와 같이 풀 수 있다.
서브쿼리에서 불러오는 비용을 적게 잡을 수 있도록, 서브쿼리에서 조건을 걸어서 불러왔다.

이 문제는 WITH를 이용해서 CTE를 만들어서 풀 수도 있다.
WITH를 이용한 풀이는 아래와 같다.
*/
WITH UNCANCLED_CS_APPOINTMENTS_IN_TARGET_DATE AS (
    SELECT apnt.APNT_NO, apnt.APNT_YMD, apnt.PT_NO, dr.DR_ID, apnt.MCDP_CD, dr.DR_NAME
    FROM APPOINTMENT AS apnt
    JOIN DOCTOR as dr ON apnt.MDDR_ID = dr.DR_ID
    WHERE apnt.MCDP_CD = 'CS' AND DATE_FORMAT(apnt.APNT_YMD, '%Y-%m-%d') = '2022-04-13' AND apnt.APNT_CNCL_YN = 'N'
)

SELECT t.APNT_NO, pt.PT_NAME, pt.PT_NO, t.MCDP_CD, t.DR_NAME, t.APNT_YMD
FROM UNCANCLED_CS_APPOINTMENTS_IN_TARGET_DATE AS t
JOIN PATIENT AS pt ON T.PT_NO = pt.PT_NO
ORDER BY t.APNT_YMD ASC