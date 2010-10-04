#pragma once
#include "global.hpp"

#include <string>
#include <boost/optional.hpp>
#include <sqlite3.h>

struct Database
{
    static boost::optional<Database> load(std::string const& filename);
    static boost::optional<Database> create(std::string const& filename);

    ~Database();
private:
    Database(sqlite3 *db);
    sqlite3 *db_;
};
