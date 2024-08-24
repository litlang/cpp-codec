#include <codecvt>
#include <locale>

#include "codec.hpp"

std::wstring decode(std::string src, codec_type Codec_type) {
	std::wstring result;

	if (Codec_type == codec_type::ASCII || Codec_type == codec_type::UTF_8) {
		std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converter; // std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    	result = converter.from_bytes(src);
	}
	return result;
}