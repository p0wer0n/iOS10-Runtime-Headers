/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject {
    int  _CPLNotifyRegistrationToken;
    bool  _CPLPrefetching;
    bool  _CPLPrefetchingCancelled;
    NSString * _CPLPrefetchingDoneToken;
    NSObject<OS_dispatch_queue> * _CPLPrefetchingIsolationQueue;
    NSObject<OS_dispatch_group> * _CPLPrefetchingWaitGroup;
    bool  _CPLPrefetchingWasCancelled;
    NSString * _assetUUID;
    int  _bestFormat;
    bool  _didCompleteCPLPrefetchingWithSuccessOrError;
    int  _format;
    long long  _imageType;
    struct CGSize { 
        double width; 
        double height; 
    }  _optimalSourcePixelSize;
    int  _prefetchCount;
    NSString * _virtualCPLTaskIdentifier;
}

@property (nonatomic, readonly) bool CPLPrefetching;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup;
@property bool CPLPrefetchingWasCancelled;
@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic) int bestFormat;
@property bool didCompleteCPLPrefetchingWithSuccessOrError;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } optimalSourcePixelSize;
@property (retain) NSString *virtualCPLTaskIdentifier;

- (bool)CPLPrefetching;
- (id)CPLPrefetchingWaitGroup;
- (bool)CPLPrefetchingWasCancelled;
- (bool)addImageHandler:(id /* block */)arg1;
- (id)assetUUID;
- (int)bestFormat;
- (id)cachedImage:(bool*)arg1;
- (id)cachedImageIfAvailable:(bool*)arg1;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (long long)decrementPrefetchCount;
- (id)description;
- (bool)didCompleteCPLPrefetchingWithSuccessOrError;
- (int)format;
- (bool)hasPrefetchCount;
- (long long)imageType;
- (long long)incrementPrefetchCount;
- (id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(int)arg2;
- (bool)isCancelled;
- (struct CGSize { double x1; double x2; })optimalSourcePixelSize;
- (void)resetPrefetchCount;
- (void)setBestFormat:(int)arg1;
- (void)setCPLPrefetchingWasCancelled:(bool)arg1;
- (void)setDidCompleteCPLPrefetchingWithSuccessOrError:(bool)arg1;
- (void)setVirtualCPLTaskIdentifier:(id)arg1;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)arg1;
- (id)virtualCPLTaskIdentifier;

@end
