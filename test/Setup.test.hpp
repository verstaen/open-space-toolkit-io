////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library ▸ I/O
/// @file           Library/IO/Setup.test.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Global.test.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace io
{
namespace test
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace global
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

std::string someGlobalString ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Environment : public testing::Environment
{

    public:

                                Environment                                 (   const   std::string&                aCommandLineArg                     )
                                :   commandLineArg_(aCommandLineArg)
        {

            if (commandLineArg_ != "")
            {
                global::someGlobalString = commandLineArg_ ;
            }
            else
            {
                global::someGlobalString = "World" ;
            }

        }

        virtual                 ~Environment                                ( )
        {

        }

        virtual void            SetUp                                       ( )
        {

        }

        virtual void            TearDown                                    ( )
        {

        }

    private:

        std::string             commandLineArg_ ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
