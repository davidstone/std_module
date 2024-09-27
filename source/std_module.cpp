// Copyright David Stone 2023.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

module;

// There are several clang bugs in including standard library headers. Do this
// to work around them and improve compile times until we get `import std;`

#include <std_module/prelude.hpp>

#include <cmath>
#include <cstdlib>
#include <cstring>

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <string>
#include <vector>

#include <algorithm>
#include <bit>
#include <chrono>
#include <compare>
#include <concepts>
#include <condition_variable>
#include <execution>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <locale>
#include <map>
#include <memory>
#include <mutex>
#include <numeric>
#include <random>
#include <ranges>
#include <set>
#include <stdexcept>
#include <sstream>
#include <string_view>
#include <thread>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <variant>

export module std_module;

namespace std {

export using std::int8_t;
export using std::int16_t;
export using std::int32_t;
export using std::int64_t;
export using std::uint8_t;
export using std::uint16_t;
export using std::uint32_t;
export using std::uint64_t;
export using std::ptrdiff_t;
export using std::size_t;
export using std::uintptr_t;
export using std::intmax_t;
export using std::uintmax_t;

export using std::strong_ordering;

export using std::in_place_t;
export using std::in_place;
export using std::in_place_type_t;
export using std::in_place_type;
export using std::in_place_index_t;
export using std::in_place_index;

export using std::endian;

export using std::bit_and;
export using std::divides;
export using std::minus;
export using std::modulus;
export using std::multiplies;
export using std::plus;

export using std::identity;

export using std::not_fn;

export using std::equal_to;
export using std::not_equal_to;
export using std::greater;
export using std::greater_equal;
export using std::less;
export using std::less_equal;

export using std::exchange;
export using std::move;
export using std::swap;
export using std::swap_ranges;

export using std::integral_constant;
export using std::bool_constant;
export using std::false_type;
export using std::true_type;
export using std::integer_sequence;
export using std::make_integer_sequence;
export using std::index_sequence;
export using std::make_index_sequence;

export using std::add_const_t;
export using std::add_pointer_t;
export using std::add_volatile_t;
export using std::common_type;
export using std::common_type_t;
export using std::conditional_t;
export using std::decay_t;
export using std::extent_v;
export using std::invoke_result_t;
export using std::is_array_v;
export using std::is_assignable_v;
export using std::is_const_v;
export using std::is_constant_evaluated;
export using std::is_enum_v;
export using std::is_function_v;
export using std::is_lvalue_reference_v;
export using std::is_rvalue_reference_v;
export using std::is_copy_assignable_v;
export using std::is_copy_constructible_v;
export using std::is_default_constructible_v;
export using std::is_empty_v;
export using std::is_function_v;
export using std::is_move_assignable_v;
export using std::is_move_constructible_v;
export using std::is_nothrow_constructible_v;
export using std::is_nothrow_copy_constructible_v;
export using std::is_nothrow_copy_assignable_v;
export using std::is_nothrow_destructible_v;
export using std::is_nothrow_move_constructible_v;
export using std::is_nothrow_move_assignable_v;
export using std::is_nothrow_swappable_v;
export using std::is_null_pointer_v;
export using std::is_pointer_v;
export using std::is_reference_v;
export using std::is_rvalue_reference_v;
export using std::is_standard_layout_v;
export using std::is_trivial_v;
export using std::is_trivially_copy_assignable_v;
export using std::is_trivially_copy_constructible_v;
export using std::is_trivially_copyable_v;
export using std::is_trivially_default_constructible_v;
export using std::is_trivially_destructible_v;
export using std::is_trivially_move_assignable_v;
export using std::is_trivially_move_constructible_v;
export using std::is_void_v;
export using std::is_volatile_v;
export using std::make_unsigned_t;
export using std::make_signed_t;
export using std::remove_const_t;
export using std::remove_cv_t;
export using std::remove_cvref_t;
export using std::remove_reference_t;
export using std::remove_pointer_t;
export using std::underlying_type_t;

export using std::copy_constructible;
export using std::derived_from;
export using std::floating_point;
export using std::integral;
export using std::invocable;
export using std::move_constructible;
export using std::same_as;
export using std::signed_integral;
export using std::unsigned_integral;

export using std::three_way_comparable;

export using std::abs;
export using std::isfinite;
export using std::log;
export using std::log2;
export using std::pow;
export using std::round;
export using std::sqrt;

export using std::addressof;
export using std::as_const;
export using std::bit_cast;
export using std::byte;
export using std::construct_at;
export using std::denorm_absent;
export using std::destroy_at;
export using std::getenv;
export using std::hash;
export using std::invoke;
export using std::isspace;
export using std::make_unique;
export using std::max;
export using std::monostate;
export using std::move_only_function;
export using std::numeric_limits;
export using std::nullptr_t;
export using std::ref;
export using std::reference_wrapper;
export using std::round_toward_zero;
export using std::to_underlying;
export using std::unique_ptr;
export using std::unreachable;

export using std::bad_alloc;
export using std::exception;
export using std::invalid_argument;
export using std::length_error;
export using std::range_error;
export using std::runtime_error;
export using std::out_of_range;

export using std::uncaught_exceptions;

export using std::begin;
export using std::end;

export using std::output_iterator_tag;
export using std::input_iterator_tag;
export using std::forward_iterator_tag;
export using std::bidirectional_iterator_tag;
export using std::random_access_iterator_tag;
export using std::reverse_iterator;
export using std::make_reverse_iterator;
export using std::default_sentinel_t;
export using std::default_sentinel;

export using std::allocator;

export using std::array;
export using std::basic_string;
export using std::basic_string_view;
export using std::deque;
export using std::forward_list;
export using std::initializer_list;
export using std::list;
export using std::map;
export using std::multimap;
export using std::set;
export using std::multiset;
export using std::span;
export using std::string;
export using std::string_view;
export using std::unordered_map;
export using std::unordered_multimap;
export using std::unordered_set;
export using std::unordered_multiset;
export using std::vector;

export using std::as_bytes;
export using std::as_writable_bytes;

inline namespace literals {
export inline namespace string_view_literals {

using std::literals::string_view_literals::operator""sv;

} // namespace string_view_literals
} // namespace literals

export using std::stod;
export using std::stoull;
export using std::to_string;

export using std::compare_three_way;
export using std::inplace_merge;
export using std::iota;
export using std::make_heap;
export using std::memcpy;
export using std::mismatch;
export using std::reduce;
export using std::reverse;
export using std::rotate;
export using std::search;
export using std::shuffle;
export using std::sort;
export using std::sort_heap;

export using std::char_traits;
export using std::pointer_traits;

namespace execution {

export using std::execution::parallel_policy;
export using std::execution::parallel_unsequenced_policy;
export using std::execution::sequenced_policy;
export using std::execution::unsequenced_policy;

export using std::execution::par;
export using std::execution::par_unseq;
export using std::execution::seq;
export using std::execution::unseq;

} // namespace execution

namespace ranges {

export using std::ranges::data;
export using std::ranges::swap;

} // namespace ranges

export using std::get;
export using std::pair;
export using std::tuple;
export using std::tuple_element;
export using std::tuple_element_t;
export using std::tuple_size;
export using std::tuple_size_v;

namespace chrono {

export using std::chrono::duration;
export using std::chrono::duration_cast;
export using std::chrono::hours;
export using std::chrono::microseconds;
export using std::chrono::milliseconds;
export using std::chrono::seconds;
export using std::chrono::high_resolution_clock;
export using std::chrono::steady_clock;
export using std::chrono::time_point;
export using std::chrono::operator+;
export using std::chrono::operator-;

} // namespace chrono

export using std::mt19937;
export using std::mt19937_64;
export using std::random_device;
export using std::discrete_distribution;
export using std::geometric_distribution;
export using std::uniform_int_distribution;
export using std::uniform_real_distribution;

export using std::atomic;
export using std::atomic_flag;
export using std::condition_variable_any;
export using std::jthread;
export using std::memory_order;
export using std::mutex;
export using std::unique_lock;
export using std::scoped_lock;
export using std::stop_token;
export using std::try_to_lock;

namespace this_thread {

export using std::this_thread::sleep_for;
export using std::this_thread::sleep_until;
export using std::this_thread::yield;

} // namespace this_thread;

namespace filesystem {

export using std::filesystem::create_directory;
export using std::filesystem::create_directories;
export using std::filesystem::directory_entry;
export using std::filesystem::directory_iterator;
export using std::filesystem::exists;
export using std::filesystem::file_size;
export using std::filesystem::is_directory;
export using std::filesystem::path;
export using std::filesystem::recursive_directory_iterator;
export using std::filesystem::remove;
export using std::filesystem::remove_all;
export using std::filesystem::temp_directory_path;

} // namespace filesystem

export using std::basic_istream;
export using std::basic_ostream;
export using std::cerr;
export using std::cout;
export using std::flush;
export using std::ifstream;
export using std::istream;
export using std::fstream;
export using std::ios;
export using std::ios_base;
export using std::istream;
export using std::istreambuf_iterator;
export using std::streamsize;
export using std::stringstream;
export using std::ofstream;
export using std::ostream;

export using std::locale;

export using std::operator+;
export using std::operator-;
export using std::operator|;
export using std::operator<<;
export using std::operator>>;

} // namespace std

#if defined __GLIBCXX__

namespace __gnu_cxx {

export using __gnu_cxx::operator-;
export using __gnu_cxx::operator==;
export using __gnu_cxx::operator<=>;

} // namespace __gnu_cxx

#elif defined _LIBCPP_VERSION

_LIBCPP_BEGIN_NAMESPACE_STD

export using std::operator==;
export using std::operator!=;
export using std::operator<=>;
export using std::operator<;
export using std::operator>;
export using std::operator<=;
export using std::operator>=;

export using std::from_range;
export using std::from_range_t;

_LIBCPP_END_NAMESPACE_STD

#endif