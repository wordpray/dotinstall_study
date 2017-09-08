-- table

drop table if exists posts;

CREATE table posts(
  id integer primary key,
  title text,
  body text
);

insert into posts(title, body) values('title1', 'body1');
insert into posts(id, title, body) values(null, 'title2', 'body2');
insert into posts(title, body) values('title3', 'body3');
insert into posts(title, body) values('title4', 'it''s body4');
insert into posts(title, body) values('title5', 'bo
  d
  y5');

select * from posts;
