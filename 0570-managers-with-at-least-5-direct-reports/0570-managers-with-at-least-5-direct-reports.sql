select e.name from employee e join (
    select managerId from employee group by managerId having count(*)>=5
) ee on e.id=ee.managerId;