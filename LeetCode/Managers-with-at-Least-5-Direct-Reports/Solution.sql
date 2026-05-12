1# Write your MySQL query statement below
2SELECT name FROM Employee WHERE ID IN ( SELECT managerId FROM Employee GROUP BY managerId HAVING COUNT(*)>4)