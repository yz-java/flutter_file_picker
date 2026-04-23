#include "include/file_picker/file_picker_plugin.h"
#include <flutter_linux/flutter_linux.h>
#include <string>
#include <vector>
using namespace std;

// This file exposes some plugin internals for unit testing. See
// https://github.com/flutter/flutter/issues/88724 for current limitations
// in the unit-testable API.

// Handles the getPlatformVersion method call.
FlMethodResponse *get_platform_version();

void open_file_dialog(const char *dialog_title, const char *initial_dir,
                      const char *type, const vector<string> allowed_extensions,
                      bool allow_multiple, bool lock_parent_window,
                      FlMethodCall *method_call);

void open_folder_dialog(const char *dialog_title, const char *initial_dir,
                        bool allow_multiple, bool lock_parent_window,
                        FlMethodCall *method_call);

FlMethodResponse *save_file_dialog(const char *dialog_title,
                                   const char *initial_dir,
                                   const char *file_name);
