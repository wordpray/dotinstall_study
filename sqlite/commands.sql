-- table

drop table if exists posts;

CREATE table posts(
  id integer primary key,
  title text,
  body text
);

-- list tables
alter table posts rename to articles;

.tables

alter table articles add column email text;

.schema
