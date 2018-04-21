#pragma once

#include "Ioman_Device.h"
#include <string>

namespace Iop
{
namespace Ioman
{
class CDirectoryDevice : public CDevice
{
public:
	CDirectoryDevice(const char*);
	virtual ~CDirectoryDevice() = default;
	Framework::CStream* GetFile(uint32, const char*) override;

private:
	std::string m_basePathPreferenceName;
};
}
}
