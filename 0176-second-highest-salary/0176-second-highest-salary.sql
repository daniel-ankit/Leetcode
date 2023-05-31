# SELECT salary AS SecondHighestSalary FROM employee AS e1
# WHERE 2 = (SELECT count(salary) FROM employee AS e2 WHERE e1.salary >= e2.salary);

SELECT MAX(salary) AS SecondHighestSalary FROM employee WHERE salary < (SELECT MAX(salary) FROM employee);