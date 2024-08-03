select 
round(count(distinct(a.player_id ))/(
    select count(distinct(player_id)) from Activity 
),2)as fraction   from Activity a WHERE
  (player_id, DATE_SUB(event_date, INTERVAL 1 DAY))
  IN (
    SELECT player_id, MIN(event_date) AS first_login FROM Activity GROUP BY player_id
  )