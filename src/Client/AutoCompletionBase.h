#pragma once


#include <atomic>
#include <thread>
#include <vector>
#include <Client/Connection.h>
#include <Client/ConnectionParameters.h>
#include <Client/IServerConnection.h>
#include <Client/LineReader.h>
#include <Client/LocalConnection.h>
#include <Columns/ColumnString.h>
#include <IO/ConnectionTimeouts.h>
#include <Parsers/Lexer.h>


namespace DB
{

class AutoCompletion
{
public:
    AutoCompletion() = default;
    ~AutoCompletion() = default;

    template <typename ContainerType>
    ContainerType getAutocompletions()
    {
        return ContainerType{"select 1+1;"};
    }
};

}
