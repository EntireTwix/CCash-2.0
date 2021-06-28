#pragma once

// Setting both values to 0 does not compile logging (useful for if disk/memory is very valuable)
constexpr unsigned max_log_size = 0;
constexpr unsigned pre_log_size = 0;

constexpr unsigned max_name_size = 50;

constexpr const char *users_location = "../users.json";
constexpr const char *config_location = "../config.json";

// Returns money to an account on deletion (useful if you dont want any money to leave the economy)
#define RETURN_ON_DEL false
constexpr const char *return_account = "";

/*
if true, when frequency is hit AND changes have happened then save 
    pros
        LOW disk usage
    cons
        LOW atomic overhead
if false, when frequency is hit save
    pros
        ZERO atomic overhead
    cons
        HIGH disk usage
*/
#define CONSERVATIVE_DISK_SAVE true

#define V1_API true