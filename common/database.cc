#include "database.hpp"

boost::optional<Database> Database::load(std::string const& filename)
{
    sqlite3 *db;
    expect(sqlite3_open(filename.c_str(), &db) == SQLITE_OK);
    assert(db != 0);

    return Database(db);
}

boost::optional<Database> Database::create(std::string const& filename)
{
    sqlite3 *db;
    expect(sqlite3_open(filename.c_str(), &db) == SQLITE_OK);

    return Database(db);
}

Database::Database(sqlite3 *db)
    : db_(db)
{
}

Database::~Database()
{
    expect(sqlite3_close(db_) == SQLITE_OK);
}

