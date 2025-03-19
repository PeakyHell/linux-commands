#include <getopt.h>

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
    while((opt = getopt_long(argc, argv, "aAbBcCdDfF:gGhHiI:klLmnNop:qQrRsStT:uUvw:xXZ1", long_options, &opt_idx))) {
        switch (opt) {

        }
    }
}