#OpenTok MOS - JS

## Usage

* Import `VideoStatsMos.js` in your component:
import VideoStatsMos from './VideoStatsMos'

* init VideoStatsMos in the constructor
```js
    this.videoStatsMos = new VideoStatsMos()
```
* Simulate Video Quality Rate after videoNetworkStats fire
```js
    this.videoStatsMos = new VideoStatsMos()
    this.subscriberEventHandlers = {
      videoNetworkStats: (stats) => {
        this.videoStatsMos.onVideoStats(stats, average => console.info('average', average))
      },
    }
```

