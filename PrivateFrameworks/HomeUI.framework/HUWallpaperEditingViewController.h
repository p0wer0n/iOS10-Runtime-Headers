/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate> {
    UIButton * _cancelButton;
    UIVisualEffectView * _cancelButtonBackgroundView;
    <HUWallpaperEditingViewControllerDelegate> * _delegate;
    UIImageView * _imageView;
    UIScrollView * _scrollView;
    UIButton * _setButton;
    UIVisualEffectView * _setButtonBackgroundView;
    bool  _statusBarHidden;
    HFWallpaper * _wallpaper;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UIVisualEffectView *cancelButtonBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUWallpaperEditingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIButton *setButton;
@property (nonatomic, retain) UIVisualEffectView *setButtonBackgroundView;
@property (nonatomic) bool statusBarHidden;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFWallpaper *wallpaper;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)buttonTouchFinished:(id)arg1;
- (void)buttonTouchStarted:(id)arg1;
- (id)buttonsView;
- (id)cancelButton;
- (id)cancelButtonBackgroundView;
- (id)delegate;
- (id)imageView;
- (id)initWithWallpaper:(id)arg1 delegate:(id)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (id)scrollView;
- (id)setButton;
- (id)setButtonBackgroundView;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSetButton:(id)arg1;
- (void)setSetButtonBackgroundView:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setWallpaper:(id)arg1;
- (bool)statusBarHidden;
- (id)transparentButtonWithTitle:(id)arg1;
- (void)updateScrollViewScale;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)wallpaper;

@end