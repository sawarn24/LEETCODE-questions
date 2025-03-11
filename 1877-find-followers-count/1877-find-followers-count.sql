# Write your MySQL query statement below
select  user_id,count(follower_id) followers_count from followers group by user_id ORDER BY user_id asc;
                                                            