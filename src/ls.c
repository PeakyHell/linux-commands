#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int all = 0;
    int almost_all = 0;
    int author = 0;
    int escape = 0;
    int block_size = 0;
    int ignore_backups = 0;
    int c = 0;
    int C = 0;
    char *color;
    int directory = 0;
    int dired = 0;
    int f = 0;
    int classify = 0;
    int file_type = 0;
    char *format;
    int full_time = 0;
    int g = 0;
    int group_directories_first = 0;
    int no_group = 0;
    int human_readable = 0;
    int si = 0;
    int dereference_command_line = 0;
    int dereference_command_line_symlink_to_dir = 0;
    char *hide;
    char *hyperlink;
    char *indicator_style;
    int inode = 0;
    char *ignore;
    int kikibytes = 0;
    int l = 0;
    int dereference = 0;
    int m = 0;
    int numeric_uid_gid = 0;
    int literal = 0;
    int o = 0;
    int hide_control_chars = 0;
    int show_control_chars = 0;
    int quote_name = 0;
    char *quoting_style;
    int reverse = 0;
    int recursive = 0;
    int size = 0;
    int S = 0;
    char *sort;
    char *time;
    char *time_style;
    int t = 0;
    int tab_size = 0;
    int u = 0;
    int U = 0;
    int v = 0;
    int width = 0;
    int x = 0;
    int X = 0;
    int context = 0;
    int zero = 0;
    int one = 0;
    int help = 0;
    int version = 0;

    static struct option long_options[] = {
        {"all", no_argument, NULL, 'a'},
        {"almost-all", no_argument, NULL, 'A'},
        {"author", no_argument, NULL, 0},
        {"escape", no_argument, NULL, 'b'},
        {"block_size", required_argument, NULL, 0},
        {"ignore-backups", no_argument, NULL, 'B'},
        {"color", required_argument, NULL, 0},
        {"directory", no_argument, NULL, 'd'},
        {"dired", no_argument, NULL, 'D'},
        {"classify", no_argument, NULL, 'F'},
        {"file-type", no_argument, NULL, 0},
        {"format", required_argument, NULL, 0},
        {"full-time", no_argument, NULL, 0},
        {"group-directories-first", no_argument, NULL, 0},
        {"no-group", no_argument, NULL, 'G'},
        {"human-readable", no_argument, NULL, 'h'},
        {"si", no_argument, NULL, 0},
        {"dereference-command-line", no_argument, NULL, 'H'},
        {"dereference-command-line-symlink-to-dir", no_argument, NULL, 0},
        {"hide", required_argument, NULL, 0},
        {"hyperlink", required_argument, NULL, 0},
        {"indicator-style", required_argument, NULL, 0},
        {"inode", no_argument, NULL, 'i'},
        {"ignore", required_argument, NULL, 'I'},
        {"kikibytes", no_argument, NULL, 'k'},
        {"dereference", no_argument, NULL, 'L'},
        {"numeric-uid-gid", no_argument, NULL, 'n'},
        {"literal", no_argument, NULL, 'N'},
        {"hide-control-chars", no_argument, NULL, 'q'},
        {"show-control-chars", no_argument, NULL, 0},
        {"quote-name", no_argument, NULL, 'Q'},
        {"quoting-style", required_argument, NULL, 0},
        {"reverse", no_argument, NULL, 'r'},
        {"recursive", no_argument, NULL, 'R'},
        {"size", no_argument, NULL, 's'},
        {"sort", required_argument, NULL, 0},
        {"time", required_argument, NULL, 0},
        {"time-style", required_argument, NULL, 0},
        {"tabsize", required_argument, NULL, 'T'},
        {"width", required_argument, NULL, 'w'},
        {"context", no_argument, NULL, 'Z'},
        {"zero", no_argument, NULL, 0},
        {"help", no_argument, NULL, 0},
        {"version", no_argument, NULL, 0},
        {NULL, 0, NULL, 0}
    };
    
    int opt;
    int opt_idx = 0;
    opterr = 0;
    while((opt = getopt_long(argc, argv, "aAbBcCdDfF:gGhHiI:klLmnNop:qQrRsStT:uUvw:xXZ1", long_options, &opt_idx)) != -1) {
        switch (opt) {
            case 'a':
                all = 1;
                break;
            case 'A':
                almost_all = 1;
                break;
            case 'b':
                escape = 1;
                break;
            case 'B':
                ignore_backups = 1;
                break;
            case 'c':
                c = 1;
                break;
            case 'C':
                C = 1;
                break;
            case 'd':
                directory = 1;
                break;
            case 'D':
                dired = 1;
                break;
            case 'f':
                f = 1;
                break;
            case 'F':
                classify = 1;
                break;
            case 'g':
                g = 1;
                break;
            case 'G':
                no_group = 1;
                break;
            case 'h':
                human_readable = 1;
                break;
            case 'H':
                dereference_command_line = 1;
                break;
            case 'i':
                inode = 1;
                break;
            case 'I':
                ignore = optarg;
                break;
            case 'k':
                kikibytes = 1;
                break;
            case 'l':
                l = 1;
                break;
            case 'L':
                dereference = 1;
                break;
            case 'm':
                m = 1;
                break;
            case 'n':
                numeric_uid_gid = 1;
                break;
            case 'N':
                literal = 1;
                break;
            case 'o':
                o = 1;
                break;
            case 'p':
                indicator_style = "slash";
                break;
            case 'q':
                hide_control_chars = 1;
                break;
            case 'Q':
                quote_name = 1;
                break;
            case 'r':
                reverse = 1;
                break;
            case 'R':
                recursive = 1;
                break;
            case 's':
                size = 1;
                break;
            case 'S':
                S = 1;
                break;
            case 't':
                t = 1;
                break;
            case 'T':
                tab_size = strtol(optarg, (char **)NULL, 10);
                break;
            case 'u':
                u = 1;
                break;
            case 'U':
                U = 1;
                break;
            case 'v':
                v = 1;
                break;
            case 'w':
                width = strtol(optarg, (char **)NULL, 10);
                break;
            case 'x':
                x = 1;
                break;
            case 'X':
                X = 1;
                break;
            case 'Z':
                context = 1;
                break;
            case '1':
                one = 1;
                break;
            case ':':
                printf("Please enter an argument for option %c\n", opt);
                exit(EXIT_FAILURE);
                break;
            case '?':
                printf("Unknown option -%c\n", optopt);
                exit(EXIT_FAILURE);
                break;
            case 0:
                break;
        }
    }
}