# Write your MySQL query statement below
select emp_id, event_day as day, sum(out_time-in_time) as total_time from employees group by emp_id, event_day;