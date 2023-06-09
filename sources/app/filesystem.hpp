#pragma once

#include <filesystem>

namespace fs = std::filesystem;

// Data Storage
namespace ds
{
    fs::path get_home_directory ();

    bool is_showed_gui ( fs::directory_entry entry );
    bool is_hidden ( fs::directory_entry entry );

    std::string get_type ( fs::directory_entry entry );

    uintmax_t   get_folder_size ( fs::path folder );
    uintmax_t   get_size ( fs::directory_entry entry );
    std::string get_size_pretty_print ( fs::directory_entry entry );

    std::string get_open_command ();
    // Open entry with default application
    bool        open ( fs::path const & file );
}  // namespace ds
