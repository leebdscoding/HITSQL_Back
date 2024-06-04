#include "parser.hpp"

cmdline::parser argParse(int argc, char * argv[]) {
        // use cmdline.h to parse the args.
    cmdline::parser argParser;
    argParser.add(
        // parse the "--init"
        "init",
        '\0',
        "initialize the database, use in first launch."
    );
    argParser.add(
        "start",
        '\0',
        "Run the server"
    );
    argParser.parse_check(argc, argv);
    return argParser;
}