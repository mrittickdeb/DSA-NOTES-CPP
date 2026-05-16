1SELECT s.name FROM SalesPerson s WHERE s.sales_id NOT IN (
2    SELECT o.sales_id FROM Orders o LEFT JOIN Company c on 
3    o.com_id=c.com_id WHERE c.name='RED'
4);