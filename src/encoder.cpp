#include <codecvt>
#include <locale>

#include "codec.hpp"

std::string encode(std::wstring src, codec_type Codec_type) {
	std::string result;

	if (Codec_type == codec_type::UTF_8) {
		std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converter;
		result = converter.to_bytes(src);
	}
	else {
		throw "unsupport coding";
	}
	return result;
}