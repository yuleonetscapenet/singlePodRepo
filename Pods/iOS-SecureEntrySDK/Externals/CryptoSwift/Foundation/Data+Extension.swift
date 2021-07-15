//
//  CryptoSwift
//
//  Copyright (C) 2014-2017 Marcin Krzyżanowski <marcin@krzyzanowskim.com>
//  This software is provided 'as-is', without any express or implied warranty.
//
//  In no event will the authors be held liable for any damages arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:
//
//  - The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation is required.
//  - Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
//  - This notice may not be removed or altered from any source or binary distribution.
//

import Foundation

extension Data {
    /// Two octet checksum as defined in RFC-4880. Sum of all octets, mod 65536
    func checksum() -> UInt16 {
        var s: UInt32 = 0
        let bytesArray = bytes
        for i in 0 ..< bytesArray.count {
            s = s + UInt32(bytesArray[i])
        }
        s = s % 65536
        return UInt16(s)
    }

    func md5() -> Data {
        return Data(_: Digest.md5(bytes))
    }

    func sha1() -> Data {
        return Data(_: Digest.sha1(bytes))
    }

    func sha224() -> Data {
        return Data(_: Digest.sha224(bytes))
    }

    func sha256() -> Data {
        return Data(_: Digest.sha256(bytes))
    }

    func sha384() -> Data {
        return Data(_: Digest.sha384(bytes))
    }

    func sha512() -> Data {
        return Data(_: Digest.sha512(bytes))
    }

    func sha3(_ variant: SHA3.Variant) -> Data {
        return Data(_: Digest.sha3(bytes, variant: variant))
    }

    func crc32(seed: UInt32? = nil, reflect: Bool = true) -> Data {
        return Data(_: Checksum.crc32(bytes, seed: seed, reflect: reflect).bytes())
    }

    func crc32c(seed: UInt32? = nil, reflect: Bool = true) -> Data {
        return Data(_: Checksum.crc32c(bytes, seed: seed, reflect: reflect).bytes())
    }

    func crc16(seed: UInt16? = nil) -> Data {
        return Data(_: Checksum.crc16(bytes, seed: seed).bytes())
    }

    func encrypt(cipher: Cipher) throws -> Data {
        return Data(_: try cipher.encrypt(bytes.slice))
    }

    func decrypt(cipher: Cipher) throws -> Data {
        return Data(_: try cipher.decrypt(bytes.slice))
    }

    func authenticate(with authenticator: Authenticator) throws -> Data {
        return Data(_: try authenticator.authenticate(bytes))
    }
}

extension Data {
    var bytes: Array<UInt8> {
        return Array(self)
    }

    func toHexString() -> String {
        return bytes.toHexString()
    }
}
