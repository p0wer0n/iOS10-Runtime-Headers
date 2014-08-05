/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerWatchdogEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _available;
    unsigned int _deviceIdentifierMap;
    unsigned int _flags;
    int _reason;
    unsigned int _subreason;
    unsigned int _version;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int available : 1; 
        unsigned int deviceIdentifierMap : 1; 
        unsigned int flags : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int version : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasVersion;
@property unsigned int version;
@property bool hasFlags;
@property unsigned int flags;
@property bool hasAvailable;
@property int available;
@property bool hasReason;
@property int reason;
@property bool hasSubreason;
@property unsigned int subreason;
@property bool hasDeviceIdentifierMap;
@property unsigned int deviceIdentifierMap;


- (unsigned int)deviceIdentifierMap;
- (unsigned int)subreason;
- (bool)hasDeviceIdentifierMap;
- (void)setHasDeviceIdentifierMap:(bool)arg1;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (bool)hasSubreason;
- (void)setHasSubreason:(bool)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (bool)hasAvailable;
- (void)setHasAvailable:(bool)arg1;
- (bool)hasFlags;
- (void)setHasFlags:(bool)arg1;
- (bool)hasReason;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setAvailable:(int)arg1;
- (int)available;
- (void)setHasVersion:(bool)arg1;
- (bool)hasVersion;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setReason:(int)arg1;
- (unsigned int)version;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setFlags:(unsigned int)arg1;
- (int)reason;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)flags;

@end