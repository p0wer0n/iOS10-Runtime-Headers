/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripAsset : NSObject <PUDisplayAsset> {
    unsigned int  _pixelHeight;
    unsigned int  _pixelWidth;
    double  _sourceTime;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic, readonly) unsigned int fullsizeDataFormat;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned int pixelHeight;
@property (nonatomic, readonly) unsigned int pixelWidth;
@property (nonatomic, readonly) double sourceTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (double)aspectRatio;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (unsigned int)fullsizeDataFormat;
- (unsigned int)hash;
- (id)init;
- (id)initWithSourceTime:(double)arg1;
- (id)initWithSourceTime:(double)arg1 pixelWidth:(unsigned int)arg2 pixelHeight:(unsigned int)arg3;
- (unsigned int)isContentEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFavorite;
- (BOOL)isTemporaryPlaceholder;
- (id)localizedGeoDescription;
- (unsigned int)mediaType;
- (id)modificationDate;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (double)sourceTime;
- (id)uuid;

@end