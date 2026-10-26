#pragma once
#include <array>
#include <cstdint>

namespace dingosdk::game::build::v20260929::localization {
// The string-override store every localized-text lookup checks before the shipped string
// database (hasString 0x3320c70 and getString 0x3322fd0 both do). Retail fills its layer 0
// from the backend's client_strings_v1 service (handler 0x268a00, lambda 0x2696d0: clear
// the layer with 0x331d060, then set each record). An id found nowhere is shown as written.
// Ids are hashed h = h * 33 + byte from 0xffffffff (0x3325670).
// Address store(): the store (a static at +0x761b410).
inline constexpr std::uintptr_t override_store = 0x331d5e0;
inline constexpr std::array<unsigned char, 19> override_store_prefix{
    0x48,0x83,0xec,0x38,0x8b,0x0d,0xf6,0x6a,0x5b,0x04,0x65,0x48,0x8b,0x04,0x25,0x58,0x00,0x00,0x00};
// bool set(Address store, const char* id, const char* utf8, int layer): takes the store's
// lock, converts the text to UTF-16 and registers its glyphs. Engine allocator: game thread.
// It converts into a 0x400-byte frame buffer (rbp-0x80, capacity 0x400 in edx), so a text is
// kept within 511 UTF-16 units and its terminator.
inline constexpr std::uintptr_t override_set = 0x331cc20;
inline constexpr std::array<unsigned char, 19> override_set_prefix{
    0x40,0x55,0x53,0x56,0x57,0x41,0x54,0x41,0x56,0x41,0x57,0x48,0x8d,0xac,0x24,0x70,0xfc,0xff,0xff};
// bool has(uint32 hash): the id is in the store or the database.
inline constexpr std::uintptr_t string_exists = 0x3320c70;
inline constexpr std::array<unsigned char, 19> string_exists_prefix{
    0x40,0x53,0x48,0x83,0xec,0x20,0x8b,0xd9,0xe8,0x63,0xc9,0xff,0xff,0x8b,0xd3,0x48,0x8b,0xc8,0xe8};
// set() encodes the text against the loaded string database (0x3325800: UTF-8 to UTF-16,
// each character registered with the database 0x3320730, then 0x3323d90 writes the stored
// form). With no database loaded yet it stores an empty string, which shows as blank.
// The database is found as that function finds it: the qword at database_loaded must be
// set; then the first of the {u32 in use (0 = this one), pad, entry*} rows at *databases,
// indices 0..*database_last, whose entry +0x10 is the database.
inline constexpr std::uintptr_t database_loaded = 0x761b4a0;
inline constexpr std::uintptr_t databases = 0x761b4a8;
inline constexpr std::uintptr_t database_last = 0x716d524;
} // namespace dingosdk::game::build::v20260929::localization
