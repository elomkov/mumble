// Copyright 2005-2017 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#include "murmur_pch.h"

#include "FFDHE.h"
#include "FFDHETable.h"

QByteArray FFDHE::PEMForNamedGroup(QString name) {
	name = name.toLower();

	if (name == QLatin1String("ffdhe2048")) {
		return QByteArray::fromRawData(ffdhe2048_pem, sizeof(ffdhe2048_pem));
	} else if (name == QLatin1String("ffdhe3072")) {
		return QByteArray::fromRawData(ffdhe3072_pem, sizeof(ffdhe3072_pem));
	} else if (name == QLatin1String("ffdhe4096")) {
		return QByteArray::fromRawData(ffdhe4096_pem, sizeof(ffdhe4096_pem));
	} else if (name == QLatin1String("ffdhe6144")) {
		return QByteArray::fromRawData(ffdhe6144_pem, sizeof(ffdhe6144_pem));
	} else if (name == QLatin1String("ffdhe8192")) {
		return QByteArray::fromRawData(ffdhe8192_pem, sizeof(ffdhe8192_pem));
	}

	return QByteArray();
}
