# Write your MySQL query statement below
select (
SELECT DISTINCT salary 
from employee
order by salary  desc
limit 1,1) as SecondHighestSalary;
