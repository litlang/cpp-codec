#pragma once

#include <string>

enum class codec_type {

	ASCII,
	UTF_8,
	UTF_16,

};

std::wstring decode(std::string, codec_type = codec_type::UTF_8);

std::string encode(std::wstring, codec_type = codec_type::UTF_8);