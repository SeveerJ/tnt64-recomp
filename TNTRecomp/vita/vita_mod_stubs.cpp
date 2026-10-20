// PS Vita: N64ModernRuntime's mod support is left out (it needs a JIT and dynamic
// libraries, which Vita homebrew doesn't have). These stand in for the mod API the rest
// of the runtime calls: no mods are ever found or loaded.
#include "librecomp/mods.hpp"
namespace N64Recomp { void live_recompiler_init(); }

namespace recomp::mods {
    void initialize_mods() {}
    void scan_mods() {}
    void close_mods() {}
    void register_embedded_mod(const std::string&, std::span<const uint8_t>) {}
    void register_deprecated_mod(const std::string&, DeprecationStatus, const Version&) {}
    void register_config_exports() {}
    void register_hook_exports() {}
    std::filesystem::path get_mods_directory() { return {}; }
    std::optional<ModDetails> get_details_for_mod(const std::string&) { return std::nullopt; }
    std::vector<ModDetails> get_all_mod_details(const std::string&) { return {}; }
    size_t game_mode_count(const std::string&, bool) { return 0; }
    recomp::Version get_mod_version(size_t) { return {}; }
    std::string get_mod_id(size_t) { return {}; }
    void enable_mod(const std::string&, bool) {}
    bool is_mod_enabled(const std::string&) { return false; }
    bool is_mod_auto_enabled(const std::string&) { return false; }
    bool is_mod_deprecated(const std::string&, const Version&) { return false; }
    DeprecationStatus get_mod_deprecation_status(const std::string&) { return {}; }
    Version get_mod_deprecation_version(const std::string&) { return {}; }
    std::string deprecation_status_to_message(DeprecationStatus) { return {}; }
    const config::ConfigSchema& get_mod_config_schema(const std::string&) { static config::ConfigSchema s{}; return s; }
    config::Config* get_mod_config(const std::string&) { return nullptr; }
    const std::vector<char>& get_mod_thumbnail(const std::string&) { static std::vector<char> v; return v; }
    void set_mod_config_value(size_t, const std::string&, const config::ConfigValueVariant&) {}
    void set_mod_config_value(const std::string&, const std::string&, const config::ConfigValueVariant&) {}
    config::ConfigValueVariant get_mod_config_value(size_t, const std::string&) { return {}; }
    config::ConfigValueVariant get_mod_config_value(const std::string&, const std::string&) { return {}; }
    std::string get_latest_game_mode_id() { return {}; }
    void set_latest_game_mode_id(const std::string&) {}
    std::string get_mod_id_from_filename(const std::filesystem::path&) { return {}; }
    std::filesystem::path get_mod_filename(const std::string&) { return {}; }
    size_t get_mod_order_index(const std::string&) { return 0; }
    size_t get_mod_order_index(size_t) { return 0; }
    ModContentTypeId register_mod_content_type(const ModContentType&) { return {}; }
    bool register_mod_container_type(const std::string&, const std::vector<ModContentTypeId>&, bool) { return false; }
    std::string get_mod_display_name(size_t) { return {}; }
    std::filesystem::path get_mod_path(size_t) { return {}; }
    std::pair<std::string, std::string> get_mod_import_info(size_t, size_t) { return {}; }
    DependencyStatus is_dependency_met(size_t, const std::string&) { return {}; }
    void set_mod_index(const std::string&, const std::string&, size_t) {}
    std::string error_to_string(ModOpenError) { return "mods are not supported on the Vita"; }
    std::string error_to_string(ModLoadError) { return "mods are not supported on the Vita"; }
    std::string error_to_string(CodeModLoadError) { return "mods are not supported on the Vita"; }
}

void N64Recomp::live_recompiler_init() {}
